// /Game/BP/Objects/BP_DropshipSeat.BP_DropshipSeat_C
// Derives from: ABP_SeatBase_C > ASeatBase > AIcarusActor > AActor > UObject
// size 0x3D1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DropshipSeat_C : public ABP_SeatBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Exit_3;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Exit_2;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Exit_1;  // 0x0390, size 0x8
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool SeatLocked;  // 0x0398, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ClientSync;  // 0x0399, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FTransform SyncedTransform;  // 0x03A0, size 0x30
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool Shake;  // 0x03D0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool EnterSeat(AIcarusPlayerCharacter* PlayerCharacter);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BP_DropshipSeat(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_SyncedTransform();
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerInteract();
};
