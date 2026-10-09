// /Script/Icarus.LoadingScreenInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Config/LoadingScreenSettings.h

UCLASS(Abstract)
class ULoadingScreenInterface : public UInterface
{
public:
    UFUNCTION(BlueprintImplementableEvent) void InitLoadingScreen(FString LevelName);  // parameters 0x10
};
