# generated from rosidl_generator_py/resource/_idl.py.em
# with input from api_msgs:srv/OpCnd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OpCnd_Request(type):
    """Metaclass of message 'OpCnd_Request'."""

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
                'api_msgs.srv.OpCnd_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__op_cnd__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__op_cnd__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__op_cnd__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__op_cnd__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__op_cnd__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OpCnd_Request(metaclass=Metaclass_OpCnd_Request):
    """Message class 'OpCnd_Request'."""

    __slots__ = [
        '_playback_mode',
        '_step_goback_max_spd',
        '_ucrd_num',
    ]

    _fields_and_field_types = {
        'playback_mode': 'int32',
        'step_goback_max_spd': 'int32',
        'ucrd_num': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.playback_mode = kwargs.get('playback_mode', int())
        self.step_goback_max_spd = kwargs.get('step_goback_max_spd', int())
        self.ucrd_num = kwargs.get('ucrd_num', int())

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
        if self.playback_mode != other.playback_mode:
            return False
        if self.step_goback_max_spd != other.step_goback_max_spd:
            return False
        if self.ucrd_num != other.ucrd_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def playback_mode(self):
        """Message field 'playback_mode'."""
        return self._playback_mode

    @playback_mode.setter
    def playback_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'playback_mode' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'playback_mode' field must be an integer in [-2147483648, 2147483647]"
        self._playback_mode = value

    @builtins.property
    def step_goback_max_spd(self):
        """Message field 'step_goback_max_spd'."""
        return self._step_goback_max_spd

    @step_goback_max_spd.setter
    def step_goback_max_spd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'step_goback_max_spd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'step_goback_max_spd' field must be an integer in [-2147483648, 2147483647]"
        self._step_goback_max_spd = value

    @builtins.property
    def ucrd_num(self):
        """Message field 'ucrd_num'."""
        return self._ucrd_num

    @ucrd_num.setter
    def ucrd_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ucrd_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ucrd_num' field must be an integer in [-2147483648, 2147483647]"
        self._ucrd_num = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_OpCnd_Response(type):
    """Metaclass of message 'OpCnd_Response'."""

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
                'api_msgs.srv.OpCnd_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__op_cnd__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__op_cnd__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__op_cnd__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__op_cnd__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__op_cnd__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OpCnd_Response(metaclass=Metaclass_OpCnd_Response):
    """Message class 'OpCnd_Response'."""

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


class Metaclass_OpCnd(type):
    """Metaclass of service 'OpCnd'."""

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
                'api_msgs.srv.OpCnd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__op_cnd

            from api_msgs.srv import _op_cnd
            if _op_cnd.Metaclass_OpCnd_Request._TYPE_SUPPORT is None:
                _op_cnd.Metaclass_OpCnd_Request.__import_type_support__()
            if _op_cnd.Metaclass_OpCnd_Response._TYPE_SUPPORT is None:
                _op_cnd.Metaclass_OpCnd_Response.__import_type_support__()


class OpCnd(metaclass=Metaclass_OpCnd):
    from api_msgs.srv._op_cnd import OpCnd_Request as Request
    from api_msgs.srv._op_cnd import OpCnd_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
