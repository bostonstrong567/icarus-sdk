// /Script/Engine.ConstraintInstance
// size 0x1C8, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h

USTRUCT()
struct FConstraintInstance : public FConstraintInstanceBase
{
public:
    UPROPERTY(EditAnywhere) FName JointName;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) FName ConstraintBone1;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere) FName ConstraintBone2;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) FVector Pos1;  // 0x0030, size 0xC
    UPROPERTY() FVector PriAxis1;  // 0x003C, size 0xC
    UPROPERTY() FVector SecAxis1;  // 0x0048, size 0xC
    UPROPERTY(EditAnywhere) FVector Pos2;  // 0x0054, size 0xC
    UPROPERTY() FVector PriAxis2;  // 0x0060, size 0xC
    UPROPERTY() FVector SecAxis2;  // 0x006C, size 0xC
    UPROPERTY(EditAnywhere) FRotator AngularRotationOffset;  // 0x0078, size 0xC
    UPROPERTY(EditAnywhere) uint8 bScaleLinearLimits : 1;  // 0x0084, mask 0x01
    float AverageMass;  // 0x0088, not reflected
    UPROPERTY(EditAnywhere) FConstraintProfileProperties ProfileInstance;  // 0x008C, size 0x114
    FChaosUserData UserData;  // 0x01A0, not reflected
private:
    float LastKnownScale;  // 0x01B0, not reflected
    TDelegate<void __cdecl(int),FDefaultDelegateUserPolicy> OnConstraintBrokenDelegate;  // 0x01B8, not reflected
};
