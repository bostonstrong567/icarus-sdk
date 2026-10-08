// /Script/AIModule.AIPerceptionStimuliSourceComponent
// Derives from: UActorComponent > UObject
// size 0xC8, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AIPerceptionStimuliSourceComponent.h

UCLASS(Config=Game)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) uint8 bAutoRegisterAsSource : 1;  // 0x00B0, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<TSubclassOf<UAISense>> RegisterAsSourceForSenses;  // 0x00B8, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bSuccessfullyRegistered;  // 0x00B0, protected

    UFUNCTION(BlueprintCallable) void RegisterForSense(TSubclassOf<UAISense> SenseClass);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RegisterWithPerceptionSystem();
    UFUNCTION(BlueprintCallable) void UnregisterFromPerceptionSystem();
    UFUNCTION(BlueprintCallable) void UnregisterFromSense(TSubclassOf<UAISense> SenseClass);  // parameters 0x8
};
