// /Game/BP/Objects/World/Items/Deployables/Targets/BP_TargetRange_Bullseye.BP_TargetRange_Bullseye_C
// Derives from: ATargetRangeTarget > AIcarusActor > AActor > UObject
// size 0x368, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TargetRange_Bullseye_C : public ATargetRangeTarget, public ICriticalHitReceiver
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube2;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube1;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Collision2;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Collision1;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Collision5;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Collision4;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Collision3;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpotLightComponent* SpotLight1;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* White;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Mesh;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* Red;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Root;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* Green;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* Blue;  // 0x0360, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) int32 BP_GenerateScore(FIcarusDamagePacket DamagePacket);  // parameters 0xDC
    UFUNCTION() void ExecuteUbergraph_BP_TargetRange_Bullseye(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FCriticalHitAreasEnum GetDefaultCriticalArea() const;  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
