// /Game/BP/Objects/World/Items/BallisticPayloads/BP_Payload_Rock_Golem_Grenade.BP_Payload_Rock_Golem_Grenade_C
// Derives from: ABP_Payload_C > AIcarusPayload > AActor > UObject
// size 0x451, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Payload_Rock_Golem_Grenade_C : public ABP_Payload_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0400, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BurnRadius;  // 0x0408, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerRadius;  // 0x040C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultRadius;  // 0x0410, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultDamage;  // 0x0414, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle SpawnedItem;  // 0x0418, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinCaltrops;  // 0x0430, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCaltrops;  // 0x0434, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinImpulseMultiplier;  // 0x0438, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxImpulseMultiplier;  // 0x043C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EmitterScale;  // 0x0440, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* ExplosionSound;  // 0x0448, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Debug;  // 0x0450, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Payload_Rock_Golem_Grenade(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDecalSize(FVector& Size);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetExplosiveAttributes(float& Damage, float& Radius);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SpawnEmitter(FRotator EmitterRotation);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void SpawningComplete();
};
