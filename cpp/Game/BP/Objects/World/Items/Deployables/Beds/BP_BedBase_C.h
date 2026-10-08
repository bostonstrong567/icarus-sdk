// /Game/BP/Objects/World/Items/Deployables/Beds/BP_BedBase.BP_BedBase_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x760, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BedBase_C : public ABP_DeployableBase_C, public IBedRecorderInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SeatAttachPoint;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_C* BP_UIProjectionComponent;  // 0x0740, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FString> AssignedPlayerUIDs;  // 0x0748, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_Seat_Bed_C* SeatRef;  // 0x0758, size 0x8

    UFUNCTION(BlueprintCallable) void AddPlayerUID(const FString& PlayerUID);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void CheckTimeSkip();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EnterBed(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_BedBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) FVector FindExitSpot();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<FString> GetPlayerUIDArray() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasPlayerUID(const FString& PlayerUID);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void InitSeat();
    UFUNCTION(BlueprintCallable) void OnRep_AssignedPlayerUIDs();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RemovePlayerUID(const FString& PlayerUID);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SanitzeAllBedUIDs();
    UFUNCTION(BlueprintImplementableEvent) void SetPlayerUIDArray(const TArray<FString>& PlayerUIDArray);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateInWorldIcon();
};
