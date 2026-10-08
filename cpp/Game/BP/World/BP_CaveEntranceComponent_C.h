// /Game/BP/World/BP_CaveEntranceComponent.BP_CaveEntranceComponent_C
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x220, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_CaveEntranceComponent_C : public USceneComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UCurveFloat* DistanceCurve;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* Audio;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UCurveFloat* DistanceCurve_Entrance;  // 0x0218, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_CaveEntranceComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetEntranceDepthForAtmos(FVector Location, float& EntranceDepth);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetSpelunkingDepth(FVector Location, float& Depth);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleAudio(bool ShouldPlay);  // parameters 0x1
};
