// /Script/Engine.UserActivity
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FUserActivity
{
public:
    UPROPERTY(BlueprintReadWrite) FString ActionName;  // 0x0000, size 0x10
    EUserActivityContext Context;  // 0x0010, not reflected
};
