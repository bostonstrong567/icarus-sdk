// /Game/BP/AI/Bosses/BT/BTS_FindTargetableActorsNearSockets.BTS_FindTargetableActorsNearSockets_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x128, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_FindTargetableActorsNearSockets_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> BoneOrSocketNames;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ACharacter* CharacterRef;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector FoundActorKey;  // 0x00C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetSocketKey;  // 0x00E8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAIRelationshipsRowHandle RelationshipFilter;  // 0x0110, size 0x18

    UFUNCTION() void ExecuteUbergraph_BTS_FindTargetableActorsNearSockets(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindNearbyTargetable();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
