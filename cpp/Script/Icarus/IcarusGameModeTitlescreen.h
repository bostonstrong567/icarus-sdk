// /Script/Icarus.IcarusGameModeTitlescreen
// Derives from: AIcarusGameModeBase > AGameMode > AGameModeBase > AInfo > AActor > UObject
// size 0x318, declared in Icarus/Source/Icarus/IcarusGameModeTitlescreen.h

UCLASS(Transient, NotPlaceable, Config=Game)
class AIcarusGameModeTitlescreen : public AIcarusGameModeBase
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FString CheckIfDriversAreUpToDate() const;  // parameters 0x10
};
