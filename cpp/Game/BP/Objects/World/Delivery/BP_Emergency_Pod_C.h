// /Game/BP/Objects/World/Delivery/BP_Emergency_Pod.BP_Emergency_Pod_C
// Derives from: ABP_Transport_Pod_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x541, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Emergency_Pod_C : public ABP_Transport_Pod_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Character;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Head;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Chest;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Legs;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Arms;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Armour_Feet;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0510, size 0x8
    UPROPERTY() float Timeline_1_OpenValue_E273B4C44EDB2E8224B9E185C2A76430;  // 0x0518, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_1__Direction_E273B4C44EDB2E8224B9E185C2A76430;  // 0x051C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_1;  // 0x0520, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DoorOpenValue;  // 0x0528, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FDoorFinishedOpening DoorFinishedOpening;  // 0x0530, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bIsOpen;  // 0x0540, size 0x1

    UFUNCTION(BlueprintCallable) void DoorFinishedOpening__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_BP_Emergency_Pod(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_bIsOpen();
    UFUNCTION(BlueprintCallable) void PodLandedEvent();
    UFUNCTION(BlueprintCallable) void StartOpening();
    UFUNCTION() void Timeline_1__FinishedFunc();
    UFUNCTION() void Timeline_1__UpdateFunc();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
