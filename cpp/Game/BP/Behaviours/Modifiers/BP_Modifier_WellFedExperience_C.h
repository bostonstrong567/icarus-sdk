// /Game/BP/Behaviours/Modifiers/BP_Modifier_WellFedExperience.BP_Modifier_WellFedExperience_C
// Derives from: UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x3F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_Modifier_WellFedExperience_C : public UBP_Modifier_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle ExperienceEvent;  // 0x03D8, size 0x18

    UFUNCTION() void ExecuteUbergraph_BP_Modifier_WellFedExperience(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
};
