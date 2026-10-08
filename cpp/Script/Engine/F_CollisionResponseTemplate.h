// /Script/Engine.CollisionResponseTemplate
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Engine/CollisionProfile.h

USTRUCT()
struct FCollisionResponseTemplate
{
    UPROPERTY() FName Name;  // 0x0000, size 0x8
    UPROPERTY() TEnumAsByte<ECollisionEnabled> CollisionEnabled;  // 0x0008, size 0x1
    UPROPERTY() bool bCanModify;  // 0x000A, size 0x1
    UPROPERTY() FName ObjectTypeName;  // 0x002C, size 0x8
    UPROPERTY() TArray<FResponseChannel> CustomResponses;  // 0x0038, size 0x10

    // Not reflected:
    TEnumAsByte<enum ECollisionChannel> ObjectType;  // 0x0009
    FCollisionResponseContainer ResponseToChannels;  // 0x000B
};
