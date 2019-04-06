/*
 * common.hpp
 * Copyright (C) 2019 Guowei Chen <icgw@outlook.com>
 *
 * Distributed under terms of the GPL license.
 */

#ifndef _COMMON_HPP_
#define _COMMON_HPP_

enum State { WAIT, FINAL, FINISH };

class Identity {
public:
  Identity(int i) : id_(i) {}

  virtual ~Identity();

  int get_id() const;

protected:
  int id_;

private:
  Identity() = default;
};

class StartEnd : public Identity {
public:
  StartEnd(int i, int speed, int from, int to)
    : Identity(i)
    , speed_(speed)
    , from_(from)
    , to_(to) {}

  virtual ~StartEnd();

  int get_speed() const;
  int get_from()  const;
  int get_to()    const;

protected:
  int speed_, from_, to_;

private:
  StartEnd() = default;
};

#endif // ifndef _COMMON_HPP_
