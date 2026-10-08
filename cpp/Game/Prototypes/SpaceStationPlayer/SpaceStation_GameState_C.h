// /Game/Prototypes/SpaceStationPlayer/SpaceStation_GameState.SpaceStation_GameState_C
// Derives from: AIcarusGameStateSpace > AIcarusGameStateBase > AGameState > AGameStateBase > AInfo > AActor > UObject
// size 0x4B8, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Game)
class ASpaceStation_GameState_C : public AIcarusGameStateSpace
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FShowLoadingScreen ShowLoadingScreen;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSharePercentagesChanged SharePercentagesChanged;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FReadyStateChanged ReadyStateChanged;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FProspectServerInfo Contract;  // 0x02F0, size 0x1B0
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FContractUpdated ContractUpdated;  // 0x04A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DialogueManager_C* DialogueManager;  // 0x04B0, size 0x8

    UFUNCTION(BlueprintCallable) void ContractUpdated__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_SpaceStation_GameState(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTICAST_ShowLoadingScreen();
    UFUNCTION(BlueprintCallable) void OnRep_Contract();
    UFUNCTION(BlueprintCallable) void OnServer_UnreadyAllPlayers();
    UFUNCTION(BlueprintCallable) void ReadyStateChanged__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetContract(FProspectServerInfo New_Contract);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void SharePercentagesChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ShowLoadingScreen__DelegateSignature(bool Show);  // parameters 0x1
};
