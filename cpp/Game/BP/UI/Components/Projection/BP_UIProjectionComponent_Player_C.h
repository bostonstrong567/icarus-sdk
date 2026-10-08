// /Game/BP/UI/Components/Projection/BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C
// Derives from: UBP_UIProjectionComponent_C > UActorComponent > UObject
// size 0x150, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_UIProjectionComponent_Player_C : public UBP_UIProjectionComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsAlive;  // 0x0128, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* Player;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SettingsEnable;  // 0x0138, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StatAbilityEnable;  // 0x0139, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LongDistanceDotProductLimit;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LongDistanceVisibilityRange;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ShortDistanceVisibilityRange;  // 0x0144, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LongDistanceVisible;  // 0x0148, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShortDistanceVisible;  // 0x0149, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayerDownedVisible;  // 0x014A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RangeToSeeDowned;  // 0x014C, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_UIProjectionComponent_Player(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnActorDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnHealthUpdate(UActorState* ActorState, float NewHealth);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_IsAlive();
    UFUNCTION(BlueprintCallable) void PlayerUIMarkerApplied(bool Value);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void StatsUpdated();
    UFUNCTION(BlueprintCallable) void Ticking_update();  // named "Ticking update"
    UFUNCTION(BlueprintCallable) void UpdateEnabled();
    UFUNCTION(BlueprintCallable) void UpdateWidget();
};
