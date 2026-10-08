// /Script/VariantManagerContent.SwitchActor
// Derives from: AActor > UObject
// size 0x248, declared in Engine/Plugins/Enterprise/VariantManagerContent/Source/VariantManagerContent/Public/SwitchActor.h

UCLASS(Config=Engine)
class ASwitchActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced) USceneComponent* SceneComponent;  // 0x0238, size 0x8
    UPROPERTY() int32 LastSelectedOption;  // 0x0240, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(int),FDefaultDelegateUserPolicy> OnSwitchActorSwitch;  // 0x0220, private

    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<AActor*> GetOptions() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetSelectedOption() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SelectOption(int32 OptionIndex);  // parameters 0x4
};
