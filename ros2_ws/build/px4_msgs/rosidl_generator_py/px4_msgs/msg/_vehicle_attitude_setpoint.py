# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleAttitudeSetpoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'q_d'
# Member 'thrust_body'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleAttitudeSetpoint(type):
    """Metaclass of message 'VehicleAttitudeSetpoint'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FLAPS_OFF': 0,
        'FLAPS_LAND': 1,
        'FLAPS_TAKEOFF': 2,
        'SPOILERS_OFF': 0,
        'SPOILERS_LAND': 1,
        'SPOILERS_DESCEND': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.VehicleAttitudeSetpoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_attitude_setpoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_attitude_setpoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_attitude_setpoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_attitude_setpoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_attitude_setpoint

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FLAPS_OFF': cls.__constants['FLAPS_OFF'],
            'FLAPS_LAND': cls.__constants['FLAPS_LAND'],
            'FLAPS_TAKEOFF': cls.__constants['FLAPS_TAKEOFF'],
            'SPOILERS_OFF': cls.__constants['SPOILERS_OFF'],
            'SPOILERS_LAND': cls.__constants['SPOILERS_LAND'],
            'SPOILERS_DESCEND': cls.__constants['SPOILERS_DESCEND'],
        }

    @property
    def FLAPS_OFF(self):
        """Message constant 'FLAPS_OFF'."""
        return Metaclass_VehicleAttitudeSetpoint.__constants['FLAPS_OFF']

    @property
    def FLAPS_LAND(self):
        """Message constant 'FLAPS_LAND'."""
        return Metaclass_VehicleAttitudeSetpoint.__constants['FLAPS_LAND']

    @property
    def FLAPS_TAKEOFF(self):
        """Message constant 'FLAPS_TAKEOFF'."""
        return Metaclass_VehicleAttitudeSetpoint.__constants['FLAPS_TAKEOFF']

    @property
    def SPOILERS_OFF(self):
        """Message constant 'SPOILERS_OFF'."""
        return Metaclass_VehicleAttitudeSetpoint.__constants['SPOILERS_OFF']

    @property
    def SPOILERS_LAND(self):
        """Message constant 'SPOILERS_LAND'."""
        return Metaclass_VehicleAttitudeSetpoint.__constants['SPOILERS_LAND']

    @property
    def SPOILERS_DESCEND(self):
        """Message constant 'SPOILERS_DESCEND'."""
        return Metaclass_VehicleAttitudeSetpoint.__constants['SPOILERS_DESCEND']


class VehicleAttitudeSetpoint(metaclass=Metaclass_VehicleAttitudeSetpoint):
    """
    Message class 'VehicleAttitudeSetpoint'.

    Constants:
      FLAPS_OFF
      FLAPS_LAND
      FLAPS_TAKEOFF
      SPOILERS_OFF
      SPOILERS_LAND
      SPOILERS_DESCEND
    """

    __slots__ = [
        '_timestamp',
        '_roll_body',
        '_pitch_body',
        '_yaw_body',
        '_yaw_sp_move_rate',
        '_q_d',
        '_thrust_body',
        '_roll_reset_integral',
        '_pitch_reset_integral',
        '_yaw_reset_integral',
        '_fw_control_yaw',
        '_apply_flaps',
        '_apply_spoilers',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'roll_body': 'float',
        'pitch_body': 'float',
        'yaw_body': 'float',
        'yaw_sp_move_rate': 'float',
        'q_d': 'float[4]',
        'thrust_body': 'float[3]',
        'roll_reset_integral': 'boolean',
        'pitch_reset_integral': 'boolean',
        'yaw_reset_integral': 'boolean',
        'fw_control_yaw': 'boolean',
        'apply_flaps': 'uint8',
        'apply_spoilers': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.roll_body = kwargs.get('roll_body', float())
        self.pitch_body = kwargs.get('pitch_body', float())
        self.yaw_body = kwargs.get('yaw_body', float())
        self.yaw_sp_move_rate = kwargs.get('yaw_sp_move_rate', float())
        if 'q_d' not in kwargs:
            self.q_d = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.q_d = numpy.array(kwargs.get('q_d'), dtype=numpy.float32)
            assert self.q_d.shape == (4, )
        if 'thrust_body' not in kwargs:
            self.thrust_body = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.thrust_body = numpy.array(kwargs.get('thrust_body'), dtype=numpy.float32)
            assert self.thrust_body.shape == (3, )
        self.roll_reset_integral = kwargs.get('roll_reset_integral', bool())
        self.pitch_reset_integral = kwargs.get('pitch_reset_integral', bool())
        self.yaw_reset_integral = kwargs.get('yaw_reset_integral', bool())
        self.fw_control_yaw = kwargs.get('fw_control_yaw', bool())
        self.apply_flaps = kwargs.get('apply_flaps', int())
        self.apply_spoilers = kwargs.get('apply_spoilers', int())

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
        if self.timestamp != other.timestamp:
            return False
        if self.roll_body != other.roll_body:
            return False
        if self.pitch_body != other.pitch_body:
            return False
        if self.yaw_body != other.yaw_body:
            return False
        if self.yaw_sp_move_rate != other.yaw_sp_move_rate:
            return False
        if all(self.q_d != other.q_d):
            return False
        if all(self.thrust_body != other.thrust_body):
            return False
        if self.roll_reset_integral != other.roll_reset_integral:
            return False
        if self.pitch_reset_integral != other.pitch_reset_integral:
            return False
        if self.yaw_reset_integral != other.yaw_reset_integral:
            return False
        if self.fw_control_yaw != other.fw_control_yaw:
            return False
        if self.apply_flaps != other.apply_flaps:
            return False
        if self.apply_spoilers != other.apply_spoilers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @property
    def roll_body(self):
        """Message field 'roll_body'."""
        return self._roll_body

    @roll_body.setter
    def roll_body(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_body' field must be of type 'float'"
        self._roll_body = value

    @property
    def pitch_body(self):
        """Message field 'pitch_body'."""
        return self._pitch_body

    @pitch_body.setter
    def pitch_body(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_body' field must be of type 'float'"
        self._pitch_body = value

    @property
    def yaw_body(self):
        """Message field 'yaw_body'."""
        return self._yaw_body

    @yaw_body.setter
    def yaw_body(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_body' field must be of type 'float'"
        self._yaw_body = value

    @property
    def yaw_sp_move_rate(self):
        """Message field 'yaw_sp_move_rate'."""
        return self._yaw_sp_move_rate

    @yaw_sp_move_rate.setter
    def yaw_sp_move_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_sp_move_rate' field must be of type 'float'"
        self._yaw_sp_move_rate = value

    @property
    def q_d(self):
        """Message field 'q_d'."""
        return self._q_d

    @q_d.setter
    def q_d(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'q_d' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'q_d' numpy.ndarray() must have a size of 4"
            self._q_d = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'q_d' field must be a set or sequence with length 4 and each value of type 'float'"
        self._q_d = numpy.array(value, dtype=numpy.float32)

    @property
    def thrust_body(self):
        """Message field 'thrust_body'."""
        return self._thrust_body

    @thrust_body.setter
    def thrust_body(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'thrust_body' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'thrust_body' numpy.ndarray() must have a size of 3"
            self._thrust_body = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'thrust_body' field must be a set or sequence with length 3 and each value of type 'float'"
        self._thrust_body = numpy.array(value, dtype=numpy.float32)

    @property
    def roll_reset_integral(self):
        """Message field 'roll_reset_integral'."""
        return self._roll_reset_integral

    @roll_reset_integral.setter
    def roll_reset_integral(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'roll_reset_integral' field must be of type 'bool'"
        self._roll_reset_integral = value

    @property
    def pitch_reset_integral(self):
        """Message field 'pitch_reset_integral'."""
        return self._pitch_reset_integral

    @pitch_reset_integral.setter
    def pitch_reset_integral(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pitch_reset_integral' field must be of type 'bool'"
        self._pitch_reset_integral = value

    @property
    def yaw_reset_integral(self):
        """Message field 'yaw_reset_integral'."""
        return self._yaw_reset_integral

    @yaw_reset_integral.setter
    def yaw_reset_integral(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'yaw_reset_integral' field must be of type 'bool'"
        self._yaw_reset_integral = value

    @property
    def fw_control_yaw(self):
        """Message field 'fw_control_yaw'."""
        return self._fw_control_yaw

    @fw_control_yaw.setter
    def fw_control_yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fw_control_yaw' field must be of type 'bool'"
        self._fw_control_yaw = value

    @property
    def apply_flaps(self):
        """Message field 'apply_flaps'."""
        return self._apply_flaps

    @apply_flaps.setter
    def apply_flaps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'apply_flaps' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'apply_flaps' field must be an unsigned integer in [0, 255]"
        self._apply_flaps = value

    @property
    def apply_spoilers(self):
        """Message field 'apply_spoilers'."""
        return self._apply_spoilers

    @apply_spoilers.setter
    def apply_spoilers(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'apply_spoilers' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'apply_spoilers' field must be an unsigned integer in [0, 255]"
        self._apply_spoilers = value
