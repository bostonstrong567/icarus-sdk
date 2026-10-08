// /Game/BP/Objects/World/Items/Deployables/Weather/BP_LightningRod_Platinum.BP_LightningRod_Platinum_C
// Derives from: ABP_LightningRod_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x73C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_LightningRod_Platinum_C : public ABP_LightningRod_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LighningUnits;  // 0x0738, size 0x4

    UFUNCTION(BlueprintCallable) void Discharge();
    UFUNCTION() void ExecuteUbergraph_BP_LightningRod_Platinum(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
};
