// /Game/AutomatedTesting/BP/Prospect/BP_FunctionalTestSeat.BP_FunctionalTestSeat_C
// Derives from: ABP_SeatBase_C > ASeatBase > AIcarusActor > AActor > UObject
// size 0x3B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FunctionalTestSeat_C : public ABP_SeatBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* TextRender;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<AActor> LookAtActor;  // 0x0388, size 0x28

    UFUNCTION(BlueprintCallable) void AttachPlayer(ACharacter* OptionalCharacterOverride);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_FunctionalTestSeat(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
