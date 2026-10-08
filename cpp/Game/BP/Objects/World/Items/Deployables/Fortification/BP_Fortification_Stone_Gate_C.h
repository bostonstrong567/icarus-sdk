// /Game/BP/Objects/World/Items/Deployables/Fortification/BP_Fortification_Stone_Gate.BP_Fortification_Stone_Gate_C
// Derives from: ABP_Door_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x790, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fortification_Stone_Gate_C : public ABP_Door_Base_C, public IAudioShelterInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinAudioShelterValue;  // 0x0778, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* BaseSkeletalMesh;  // 0x0780, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USkeletalMesh* DestructionSkeletalMeshState_1;  // 0x0788, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Fortification_Stone_Gate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) float GetAudioShelterValue(AIcarusPlayerCharacter* Player) const;  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateDamageState(UActorState* ActorState, float NewHealth);  // parameters 0xC
};
