// /Script/Engine.NavigationDataChunk
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h

UCLASS(Abstract)
class UNavigationDataChunk : public UObject
{
public:
    UPROPERTY() FName NavigationDataName;  // 0x0028, size 0x8
};
