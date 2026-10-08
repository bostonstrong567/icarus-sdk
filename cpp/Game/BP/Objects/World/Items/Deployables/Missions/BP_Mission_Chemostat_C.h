// /Game/BP/Objects/World/Items/Deployables/Missions/BP_Mission_Chemostat.BP_Mission_Chemostat_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x770, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Chemostat_C : public ABP_DeployableBase_C, public IBPI_GenericAction_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 Target_pH;  // 0x0738, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 Target_Rads;  // 0x073C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 Target_Temp;  // 0x0740, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 Current_pH;  // 0x0744, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 Current_Rads;  // 0x0748, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 Current_Temp;  // 0x074C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 WorkingValue;  // 0x0750, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FValuesUpdated ValuesUpdated;  // 0x0758, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) int32 Actions;  // 0x0768, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool Stable;  // 0x076C, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Stable_PH;  // 0x076D, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Stable_Rads;  // 0x076E, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Stable_Temp;  // 0x076F, size 0x1

    UFUNCTION(BlueprintCallable) void CheckStable();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Chemostat(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FlipRads_Temp();
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void GenericActionWithCharacter(AIcarusPlayerCharacter* Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GeneticActionInt(int32 Data);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsWithinRange(int32 Current, int32 Target, float Percent);  // parameters 0xD
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_Success_Audio();
    UFUNCTION(BlueprintCallable) void ModifyPH(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ModifyRads(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ModifyTemp(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_Actions();
    UFUNCTION(BlueprintCallable) void OnRep_Current_Rads();
    UFUNCTION(BlueprintCallable) void OnRep_Current_Temp();
    UFUNCTION(BlueprintCallable) void OnRep_Current_pH();
    UFUNCTION(BlueprintCallable) void OnRep_Stable();
    UFUNCTION(BlueprintCallable) void OnRep_Stable_PH();
    UFUNCTION(BlueprintCallable) void OnRep_Stable_Rads();
    UFUNCTION(BlueprintCallable) void OnRep_Stable_Temp();
    UFUNCTION(BlueprintCallable) void Reset();
    UFUNCTION(BlueprintCallable) void ValuesUpdated__DelegateSignature();
};
