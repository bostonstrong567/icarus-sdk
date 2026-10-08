// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_SecurityDoor.BP_SecurityDoor_C
// Derives from: ABP_LockedDoor_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x390, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SecurityDoor_C : public ABP_LockedDoor_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh2;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* Widget;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh1;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Password;  // 0x0378, size 0x18

    UFUNCTION() void ExecuteUbergraph_BP_SecurityDoor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenericAction();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
