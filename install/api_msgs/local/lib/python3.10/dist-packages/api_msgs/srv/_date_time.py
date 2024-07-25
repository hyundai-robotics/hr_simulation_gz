# generated from rosidl_generator_py/resource/_idl.py.em
# with input from api_msgs:srv/DateTime.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DateTime_Request(type):
    """Metaclass of message 'DateTime_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'api_msgs.srv.DateTime_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__date_time__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__date_time__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__date_time__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__date_time__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__date_time__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DateTime_Request(metaclass=Metaclass_DateTime_Request):
    """Message class 'DateTime_Request'."""

    __slots__ = [
        '_year',
        '_mon',
        '_day',
        '_hour',
        '_min',
        '_sec',
    ]

    _fields_and_field_types = {
        'year': 'int32',
        'mon': 'int32',
        'day': 'int32',
        'hour': 'int32',
        'min': 'int32',
        'sec': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.year = kwargs.get('year', int())
        self.mon = kwargs.get('mon', int())
        self.day = kwargs.get('day', int())
        self.hour = kwargs.get('hour', int())
        self.min = kwargs.get('min', int())
        self.sec = kwargs.get('sec', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.year != other.year:
            return False
        if self.mon != other.mon:
            return False
        if self.day != other.day:
            return False
        if self.hour != other.hour:
            return False
        if self.min != other.min:
            return False
        if self.sec != other.sec:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def year(self):
        """Message field 'year'."""
        return self._year

    @year.setter
    def year(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'year' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'year' field must be an integer in [-2147483648, 2147483647]"
        self._year = value

    @builtins.property
    def mon(self):
        """Message field 'mon'."""
        return self._mon

    @mon.setter
    def mon(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mon' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'mon' field must be an integer in [-2147483648, 2147483647]"
        self._mon = value

    @builtins.property
    def day(self):
        """Message field 'day'."""
        return self._day

    @day.setter
    def day(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'day' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'day' field must be an integer in [-2147483648, 2147483647]"
        self._day = value

    @builtins.property
    def hour(self):
        """Message field 'hour'."""
        return self._hour

    @hour.setter
    def hour(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hour' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hour' field must be an integer in [-2147483648, 2147483647]"
        self._hour = value

    @builtins.property  # noqa: A003
    def min(self):  # noqa: A003
        """Message field 'min'."""
        return self._min

    @min.setter  # noqa: A003
    def min(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'min' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'min' field must be an integer in [-2147483648, 2147483647]"
        self._min = value

    @builtins.property
    def sec(self):
        """Message field 'sec'."""
        return self._sec

    @sec.setter
    def sec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sec' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sec' field must be an integer in [-2147483648, 2147483647]"
        self._sec = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DateTime_Response(type):
    """Metaclass of message 'DateTime_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'api_msgs.srv.DateTime_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__date_time__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__date_time__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__date_time__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__date_time__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__date_time__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DateTime_Response(metaclass=Metaclass_DateTime_Response):
    """Message class 'DateTime_Response'."""

    __slots__ = [
        '_message',
        '_success',
    ]

    _fields_and_field_types = {
        'message': 'string',
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message = kwargs.get('message', str())
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.message != other.message:
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_DateTime(type):
    """Metaclass of service 'DateTime'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('api_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'api_msgs.srv.DateTime')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__date_time

            from api_msgs.srv import _date_time
            if _date_time.Metaclass_DateTime_Request._TYPE_SUPPORT is None:
                _date_time.Metaclass_DateTime_Request.__import_type_support__()
            if _date_time.Metaclass_DateTime_Response._TYPE_SUPPORT is None:
                _date_time.Metaclass_DateTime_Response.__import_type_support__()


class DateTime(metaclass=Metaclass_DateTime):
    from api_msgs.srv._date_time import DateTime_Request as Request
    from api_msgs.srv._date_time import DateTime_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
