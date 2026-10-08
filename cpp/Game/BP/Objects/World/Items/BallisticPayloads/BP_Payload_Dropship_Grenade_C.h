// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_Dropship_Grenade.BP_Payload_Dropship_Grenade_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x440, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_Dropship_Grenade_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ActiveAudio;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BurnRadius;  // 0x0410, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DamageMultiplier;  // 0x0414, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerRadius;  // 0x0418, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OuterRadius;  // 0x041C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DropShip_C* DropShip;  // 0x0420, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* SpawnedFlare;  // 0x0428, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PostDeployLifespan;  // 0x0430, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FVector_NetQuantize EffectsSourceLocation;  // 0x0434, size 0xC

    UFUNCTION() void ExecuteUbergraph_BP_Payload_Dropship_Grenade(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnEQSComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnRep_EffectsAreActive();
    UFUNCTION(BlueprintCallable) void OnRep_EffectsSourceLocation();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SpawnFlare();
};
