// /Game/BP/AI/Taming/BP_TamingComponent.BP_TamingComponent_C
// Derives from: UIcarusTamingComponent > UActorComponent > UObject
// size 0x140, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_TamingComponent_C : public UIcarusTamingComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ShelteredComponent_C* ShelterComponent;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UShelteredModifierComponent* ShelteredModifierComponent;  // 0x0118, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsTiredKey;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsJuvenileKey;  // 0x0128, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnJuvenileGrownUp OnJuvenileGrownUp;  // 0x0130, size 0x10

    UFUNCTION() void ExecuteUbergraph_BP_TamingComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTamedAI(const FIcarusTamingData& IcarusTamingData, FAISetupRowHandle& TamedAI);  // parameters 0x158
    UFUNCTION(BlueprintImplementableEvent) void InitialiseTamingComponent(FTamesRowHandle TamesRowHandle, bool bShouldFollow);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void OnJuvenileGrownUp__DelegateSignature(ABP_IcarusNPCGOAPCharacter_Juvenile_C* Juvenile, AIcarusMountCharacter* Adult);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnTamedStateUpdated(ETamedState NewState);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
