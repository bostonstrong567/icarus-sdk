// /Script/Engine.ResponseChannel
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FResponseChannel
{
public:
    UPROPERTY(EditAnywhere) FName Channel;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<ECollisionResponse> Response;  // 0x0008, size 0x1
};
