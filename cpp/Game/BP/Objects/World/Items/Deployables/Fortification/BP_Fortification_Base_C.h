// /Game/BP/Objects/World/Items/Deployables/Fortification/BP_Fortification_Base.BP_Fortification_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x758, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fortification_Base_C : public ABP_DeployableBase_C, public IAudioOccluderInterface, public IAudioShelterInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinAudioShelterValue;  // 0x0730, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* BaseStaticMesh;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* DestructionStaticMeshState_1;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* BaseSkeletalMesh;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* DestructionSkeletalMeshState_1;  // 0x0750, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Fortification_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetAudioShelterValue(AIcarusPlayerCharacter* Player) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetOcclusionValue() const;  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateDamageState(UActorState* ActorState, float NewHealth);  // parameters 0xC
};
