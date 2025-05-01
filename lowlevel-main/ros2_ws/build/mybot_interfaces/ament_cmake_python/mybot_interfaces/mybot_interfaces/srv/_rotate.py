# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mybot_interfaces:srv/Rotate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Rotate_Request(type):
    """Metaclass of message 'Rotate_Request'."""

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
            module = import_type_support('mybot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mybot_interfaces.srv.Rotate_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rotate__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rotate__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rotate__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rotate__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rotate__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rotate_Request(metaclass=Metaclass_Rotate_Request):
    """Message class 'Rotate_Request'."""

    __slots__ = [
        '_angle_motor_1_1',
        '_angle_motor_1_2',
        '_angle_motor_1_3',
        '_angle_motor_1_4',
        '_angle_motor_1_5',
        '_angle_motor_1_6',
        '_angle_motor_2_1',
        '_angle_motor_2_2',
        '_angle_motor_2_3',
        '_angle_motor_2_4',
        '_angle_motor_2_5',
        '_angle_motor_2_6',
        '_angle_motor_3_1',
        '_angle_motor_3_2',
        '_angle_motor_3_3',
        '_angle_motor_1_1_set',
        '_angle_motor_1_2_set',
        '_angle_motor_1_3_set',
        '_angle_motor_1_4_set',
        '_angle_motor_1_5_set',
        '_angle_motor_1_6_set',
        '_angle_motor_2_1_set',
        '_angle_motor_2_2_set',
        '_angle_motor_2_3_set',
        '_angle_motor_2_4_set',
        '_angle_motor_2_5_set',
        '_angle_motor_2_6_set',
        '_angle_motor_3_1_set',
        '_angle_motor_3_2_set',
        '_angle_motor_3_3_set',
    ]

    _fields_and_field_types = {
        'angle_motor_1_1': 'double',
        'angle_motor_1_2': 'double',
        'angle_motor_1_3': 'double',
        'angle_motor_1_4': 'double',
        'angle_motor_1_5': 'double',
        'angle_motor_1_6': 'double',
        'angle_motor_2_1': 'double',
        'angle_motor_2_2': 'double',
        'angle_motor_2_3': 'double',
        'angle_motor_2_4': 'double',
        'angle_motor_2_5': 'double',
        'angle_motor_2_6': 'double',
        'angle_motor_3_1': 'double',
        'angle_motor_3_2': 'double',
        'angle_motor_3_3': 'double',
        'angle_motor_1_1_set': 'double',
        'angle_motor_1_2_set': 'double',
        'angle_motor_1_3_set': 'double',
        'angle_motor_1_4_set': 'double',
        'angle_motor_1_5_set': 'double',
        'angle_motor_1_6_set': 'double',
        'angle_motor_2_1_set': 'double',
        'angle_motor_2_2_set': 'double',
        'angle_motor_2_3_set': 'double',
        'angle_motor_2_4_set': 'double',
        'angle_motor_2_5_set': 'double',
        'angle_motor_2_6_set': 'double',
        'angle_motor_3_1_set': 'double',
        'angle_motor_3_2_set': 'double',
        'angle_motor_3_3_set': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.angle_motor_1_1 = kwargs.get('angle_motor_1_1', float())
        self.angle_motor_1_2 = kwargs.get('angle_motor_1_2', float())
        self.angle_motor_1_3 = kwargs.get('angle_motor_1_3', float())
        self.angle_motor_1_4 = kwargs.get('angle_motor_1_4', float())
        self.angle_motor_1_5 = kwargs.get('angle_motor_1_5', float())
        self.angle_motor_1_6 = kwargs.get('angle_motor_1_6', float())
        self.angle_motor_2_1 = kwargs.get('angle_motor_2_1', float())
        self.angle_motor_2_2 = kwargs.get('angle_motor_2_2', float())
        self.angle_motor_2_3 = kwargs.get('angle_motor_2_3', float())
        self.angle_motor_2_4 = kwargs.get('angle_motor_2_4', float())
        self.angle_motor_2_5 = kwargs.get('angle_motor_2_5', float())
        self.angle_motor_2_6 = kwargs.get('angle_motor_2_6', float())
        self.angle_motor_3_1 = kwargs.get('angle_motor_3_1', float())
        self.angle_motor_3_2 = kwargs.get('angle_motor_3_2', float())
        self.angle_motor_3_3 = kwargs.get('angle_motor_3_3', float())
        self.angle_motor_1_1_set = kwargs.get('angle_motor_1_1_set', float())
        self.angle_motor_1_2_set = kwargs.get('angle_motor_1_2_set', float())
        self.angle_motor_1_3_set = kwargs.get('angle_motor_1_3_set', float())
        self.angle_motor_1_4_set = kwargs.get('angle_motor_1_4_set', float())
        self.angle_motor_1_5_set = kwargs.get('angle_motor_1_5_set', float())
        self.angle_motor_1_6_set = kwargs.get('angle_motor_1_6_set', float())
        self.angle_motor_2_1_set = kwargs.get('angle_motor_2_1_set', float())
        self.angle_motor_2_2_set = kwargs.get('angle_motor_2_2_set', float())
        self.angle_motor_2_3_set = kwargs.get('angle_motor_2_3_set', float())
        self.angle_motor_2_4_set = kwargs.get('angle_motor_2_4_set', float())
        self.angle_motor_2_5_set = kwargs.get('angle_motor_2_5_set', float())
        self.angle_motor_2_6_set = kwargs.get('angle_motor_2_6_set', float())
        self.angle_motor_3_1_set = kwargs.get('angle_motor_3_1_set', float())
        self.angle_motor_3_2_set = kwargs.get('angle_motor_3_2_set', float())
        self.angle_motor_3_3_set = kwargs.get('angle_motor_3_3_set', float())

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
        if self.angle_motor_1_1 != other.angle_motor_1_1:
            return False
        if self.angle_motor_1_2 != other.angle_motor_1_2:
            return False
        if self.angle_motor_1_3 != other.angle_motor_1_3:
            return False
        if self.angle_motor_1_4 != other.angle_motor_1_4:
            return False
        if self.angle_motor_1_5 != other.angle_motor_1_5:
            return False
        if self.angle_motor_1_6 != other.angle_motor_1_6:
            return False
        if self.angle_motor_2_1 != other.angle_motor_2_1:
            return False
        if self.angle_motor_2_2 != other.angle_motor_2_2:
            return False
        if self.angle_motor_2_3 != other.angle_motor_2_3:
            return False
        if self.angle_motor_2_4 != other.angle_motor_2_4:
            return False
        if self.angle_motor_2_5 != other.angle_motor_2_5:
            return False
        if self.angle_motor_2_6 != other.angle_motor_2_6:
            return False
        if self.angle_motor_3_1 != other.angle_motor_3_1:
            return False
        if self.angle_motor_3_2 != other.angle_motor_3_2:
            return False
        if self.angle_motor_3_3 != other.angle_motor_3_3:
            return False
        if self.angle_motor_1_1_set != other.angle_motor_1_1_set:
            return False
        if self.angle_motor_1_2_set != other.angle_motor_1_2_set:
            return False
        if self.angle_motor_1_3_set != other.angle_motor_1_3_set:
            return False
        if self.angle_motor_1_4_set != other.angle_motor_1_4_set:
            return False
        if self.angle_motor_1_5_set != other.angle_motor_1_5_set:
            return False
        if self.angle_motor_1_6_set != other.angle_motor_1_6_set:
            return False
        if self.angle_motor_2_1_set != other.angle_motor_2_1_set:
            return False
        if self.angle_motor_2_2_set != other.angle_motor_2_2_set:
            return False
        if self.angle_motor_2_3_set != other.angle_motor_2_3_set:
            return False
        if self.angle_motor_2_4_set != other.angle_motor_2_4_set:
            return False
        if self.angle_motor_2_5_set != other.angle_motor_2_5_set:
            return False
        if self.angle_motor_2_6_set != other.angle_motor_2_6_set:
            return False
        if self.angle_motor_3_1_set != other.angle_motor_3_1_set:
            return False
        if self.angle_motor_3_2_set != other.angle_motor_3_2_set:
            return False
        if self.angle_motor_3_3_set != other.angle_motor_3_3_set:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def angle_motor_1_1(self):
        """Message field 'angle_motor_1_1'."""
        return self._angle_motor_1_1

    @angle_motor_1_1.setter
    def angle_motor_1_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_1_1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_1_1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_1_1 = value

    @builtins.property
    def angle_motor_1_2(self):
        """Message field 'angle_motor_1_2'."""
        return self._angle_motor_1_2

    @angle_motor_1_2.setter
    def angle_motor_1_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_1_2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_1_2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_1_2 = value

    @builtins.property
    def angle_motor_1_3(self):
        """Message field 'angle_motor_1_3'."""
        return self._angle_motor_1_3

    @angle_motor_1_3.setter
    def angle_motor_1_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_1_3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_1_3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_1_3 = value

    @builtins.property
    def angle_motor_1_4(self):
        """Message field 'angle_motor_1_4'."""
        return self._angle_motor_1_4

    @angle_motor_1_4.setter
    def angle_motor_1_4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_1_4' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_1_4' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_1_4 = value

    @builtins.property
    def angle_motor_1_5(self):
        """Message field 'angle_motor_1_5'."""
        return self._angle_motor_1_5

    @angle_motor_1_5.setter
    def angle_motor_1_5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_1_5' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_1_5' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_1_5 = value

    @builtins.property
    def angle_motor_1_6(self):
        """Message field 'angle_motor_1_6'."""
        return self._angle_motor_1_6

    @angle_motor_1_6.setter
    def angle_motor_1_6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_1_6' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_1_6' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_1_6 = value

    @builtins.property
    def angle_motor_2_1(self):
        """Message field 'angle_motor_2_1'."""
        return self._angle_motor_2_1

    @angle_motor_2_1.setter
    def angle_motor_2_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_2_1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_2_1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_2_1 = value

    @builtins.property
    def angle_motor_2_2(self):
        """Message field 'angle_motor_2_2'."""
        return self._angle_motor_2_2

    @angle_motor_2_2.setter
    def angle_motor_2_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_2_2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_2_2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_2_2 = value

    @builtins.property
    def angle_motor_2_3(self):
        """Message field 'angle_motor_2_3'."""
        return self._angle_motor_2_3

    @angle_motor_2_3.setter
    def angle_motor_2_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_2_3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_2_3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_2_3 = value

    @builtins.property
    def angle_motor_2_4(self):
        """Message field 'angle_motor_2_4'."""
        return self._angle_motor_2_4

    @angle_motor_2_4.setter
    def angle_motor_2_4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_2_4' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_2_4' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_2_4 = value

    @builtins.property
    def angle_motor_2_5(self):
        """Message field 'angle_motor_2_5'."""
        return self._angle_motor_2_5

    @angle_motor_2_5.setter
    def angle_motor_2_5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_2_5' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_2_5' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_2_5 = value

    @builtins.property
    def angle_motor_2_6(self):
        """Message field 'angle_motor_2_6'."""
        return self._angle_motor_2_6

    @angle_motor_2_6.setter
    def angle_motor_2_6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_2_6' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_2_6' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_2_6 = value

    @builtins.property
    def angle_motor_3_1(self):
        """Message field 'angle_motor_3_1'."""
        return self._angle_motor_3_1

    @angle_motor_3_1.setter
    def angle_motor_3_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_3_1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_3_1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_3_1 = value

    @builtins.property
    def angle_motor_3_2(self):
        """Message field 'angle_motor_3_2'."""
        return self._angle_motor_3_2

    @angle_motor_3_2.setter
    def angle_motor_3_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_3_2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_3_2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_3_2 = value

    @builtins.property
    def angle_motor_3_3(self):
        """Message field 'angle_motor_3_3'."""
        return self._angle_motor_3_3

    @angle_motor_3_3.setter
    def angle_motor_3_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_3_3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_3_3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_3_3 = value

    @builtins.property
    def angle_motor_1_1_set(self):
        """Message field 'angle_motor_1_1_set'."""
        return self._angle_motor_1_1_set

    @angle_motor_1_1_set.setter
    def angle_motor_1_1_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_1_1_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_1_1_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_1_1_set = value

    @builtins.property
    def angle_motor_1_2_set(self):
        """Message field 'angle_motor_1_2_set'."""
        return self._angle_motor_1_2_set

    @angle_motor_1_2_set.setter
    def angle_motor_1_2_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_1_2_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_1_2_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_1_2_set = value

    @builtins.property
    def angle_motor_1_3_set(self):
        """Message field 'angle_motor_1_3_set'."""
        return self._angle_motor_1_3_set

    @angle_motor_1_3_set.setter
    def angle_motor_1_3_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_1_3_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_1_3_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_1_3_set = value

    @builtins.property
    def angle_motor_1_4_set(self):
        """Message field 'angle_motor_1_4_set'."""
        return self._angle_motor_1_4_set

    @angle_motor_1_4_set.setter
    def angle_motor_1_4_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_1_4_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_1_4_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_1_4_set = value

    @builtins.property
    def angle_motor_1_5_set(self):
        """Message field 'angle_motor_1_5_set'."""
        return self._angle_motor_1_5_set

    @angle_motor_1_5_set.setter
    def angle_motor_1_5_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_1_5_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_1_5_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_1_5_set = value

    @builtins.property
    def angle_motor_1_6_set(self):
        """Message field 'angle_motor_1_6_set'."""
        return self._angle_motor_1_6_set

    @angle_motor_1_6_set.setter
    def angle_motor_1_6_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_1_6_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_1_6_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_1_6_set = value

    @builtins.property
    def angle_motor_2_1_set(self):
        """Message field 'angle_motor_2_1_set'."""
        return self._angle_motor_2_1_set

    @angle_motor_2_1_set.setter
    def angle_motor_2_1_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_2_1_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_2_1_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_2_1_set = value

    @builtins.property
    def angle_motor_2_2_set(self):
        """Message field 'angle_motor_2_2_set'."""
        return self._angle_motor_2_2_set

    @angle_motor_2_2_set.setter
    def angle_motor_2_2_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_2_2_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_2_2_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_2_2_set = value

    @builtins.property
    def angle_motor_2_3_set(self):
        """Message field 'angle_motor_2_3_set'."""
        return self._angle_motor_2_3_set

    @angle_motor_2_3_set.setter
    def angle_motor_2_3_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_2_3_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_2_3_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_2_3_set = value

    @builtins.property
    def angle_motor_2_4_set(self):
        """Message field 'angle_motor_2_4_set'."""
        return self._angle_motor_2_4_set

    @angle_motor_2_4_set.setter
    def angle_motor_2_4_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_2_4_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_2_4_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_2_4_set = value

    @builtins.property
    def angle_motor_2_5_set(self):
        """Message field 'angle_motor_2_5_set'."""
        return self._angle_motor_2_5_set

    @angle_motor_2_5_set.setter
    def angle_motor_2_5_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_2_5_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_2_5_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_2_5_set = value

    @builtins.property
    def angle_motor_2_6_set(self):
        """Message field 'angle_motor_2_6_set'."""
        return self._angle_motor_2_6_set

    @angle_motor_2_6_set.setter
    def angle_motor_2_6_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_2_6_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_2_6_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_2_6_set = value

    @builtins.property
    def angle_motor_3_1_set(self):
        """Message field 'angle_motor_3_1_set'."""
        return self._angle_motor_3_1_set

    @angle_motor_3_1_set.setter
    def angle_motor_3_1_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_3_1_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_3_1_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_3_1_set = value

    @builtins.property
    def angle_motor_3_2_set(self):
        """Message field 'angle_motor_3_2_set'."""
        return self._angle_motor_3_2_set

    @angle_motor_3_2_set.setter
    def angle_motor_3_2_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_3_2_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_3_2_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_3_2_set = value

    @builtins.property
    def angle_motor_3_3_set(self):
        """Message field 'angle_motor_3_3_set'."""
        return self._angle_motor_3_3_set

    @angle_motor_3_3_set.setter
    def angle_motor_3_3_set(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_motor_3_3_set' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'angle_motor_3_3_set' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._angle_motor_3_3_set = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Rotate_Response(type):
    """Metaclass of message 'Rotate_Response'."""

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
            module = import_type_support('mybot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mybot_interfaces.srv.Rotate_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rotate__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rotate__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rotate__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rotate__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rotate__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rotate_Response(metaclass=Metaclass_Rotate_Response):
    """Message class 'Rotate_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


class Metaclass_Rotate(type):
    """Metaclass of service 'Rotate'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mybot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mybot_interfaces.srv.Rotate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rotate

            from mybot_interfaces.srv import _rotate
            if _rotate.Metaclass_Rotate_Request._TYPE_SUPPORT is None:
                _rotate.Metaclass_Rotate_Request.__import_type_support__()
            if _rotate.Metaclass_Rotate_Response._TYPE_SUPPORT is None:
                _rotate.Metaclass_Rotate_Response.__import_type_support__()


class Rotate(metaclass=Metaclass_Rotate):
    from mybot_interfaces.srv._rotate import Rotate_Request as Request
    from mybot_interfaces.srv._rotate import Rotate_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
