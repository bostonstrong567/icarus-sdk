// /Script/Icarus.TransientLandingPadInfo
// size 0x50, declared in Icarus/Source/Icarus/IcarusGameModeSurvival.h

USTRUCT()
struct FTransientLandingPadInfo
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<AIcarusPlayerControllerSurvival> PlayerController;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<AActor> LandingPad;  // 0x0028, size 0x28
};
