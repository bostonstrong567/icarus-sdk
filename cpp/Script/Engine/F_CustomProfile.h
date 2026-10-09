// /Script/Engine.CustomProfile
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/CollisionProfile.h

USTRUCT()
struct FCustomProfile
{
public:
    UPROPERTY() FName Name;  // 0x0000, size 0x8
    UPROPERTY() TArray<FResponseChannel> CustomResponses;  // 0x0008, size 0x10
};
