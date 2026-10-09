// /Script/Engine.RigidBodyState
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FRigidBodyState
{
public:
    UPROPERTY() FVector_NetQuantize100 Position;  // 0x0000, size 0xC
    UPROPERTY() FQuat Quaternion;  // 0x0010, size 0x10
    UPROPERTY() FVector_NetQuantize100 LinVel;  // 0x0020, size 0xC
    UPROPERTY() FVector_NetQuantize100 AngVel;  // 0x002C, size 0xC
    UPROPERTY() uint8 Flags;  // 0x0038, size 0x1
};
