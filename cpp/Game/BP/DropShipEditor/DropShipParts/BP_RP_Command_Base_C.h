// /Game/BP/DropShipEditor/DropShipParts/BP_RP_Command_Base.BP_RP_Command_Base_C
// Derives from: ABP_PartBase_C > AIcarusRocketPart > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x619, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RP_Command_Base_C : public ABP_PartBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x05E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* Container;  // 0x05F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* Seat;  // 0x05F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* Bottom;  // 0x0600, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* Top;  // 0x0608, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0610, size 0x8
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) bool Open;  // 0x0618, size 0x1

    UFUNCTION(BlueprintCallable) void EnterSeat(AIcarusPlayerCharacterSurvival* Character, bool& Success);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BP_RP_Command_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ExitSeat(bool& Success);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMesh(UPrimitiveComponent*& Mesh);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSeat(ABP_DropshipSeat_C*& Dropship_Seat);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ReadyCheck(bool& Success);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void TriggerEvent(FDropShipActionsEnum Actions);  // parameters 0x10
};
