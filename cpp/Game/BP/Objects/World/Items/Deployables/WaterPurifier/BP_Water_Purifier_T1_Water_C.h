// /Game/BP/Objects/World/Items/Deployables/WaterPurifier/BP_Water_Purifier_T1_Water.BP_Water_Purifier_T1_Water_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x73D, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Water_Purifier_T1_Water_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Millilitres;  // 0x0738, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DelayComplete;  // 0x073C, size 0x1

    UFUNCTION(BlueprintCallable) void ActivateGenerator();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Event_Fill(int32 Millilitres);  // parameters 0x4, named "Event Fill"
    UFUNCTION() void ExecuteUbergraph_BP_Water_Purifier_T1_Water(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
