// /Game/BP/Objects/World/Items/Deployables/Furniture/BP_ChairBase.BP_ChairBase_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x798, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ChairBase_C : public ABP_DeployableBase_C, public IBedRecorderInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SeatAttachPoint_3S_L;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SeatAttachPoint_3S_R;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SeatAttachPoint_2S_R;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SeatAttachPoint_2S_L;  // 0x0748, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SeatAttachPoint;  // 0x0750, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FString> AssignedPlayerUIDs;  // 0x0758, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Seats;  // 0x0768, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_Seat_Chair_C* SeatRef;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_Seat_Chair_C* SeatRef_2S_L;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_Seat_Chair_C* SeatRef_2S_R;  // 0x0780, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_Seat_Chair_C* SeatRef_3S_L;  // 0x0788, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_Seat_Chair_C* SeatRef_3S_R;  // 0x0790, size 0x8

    UFUNCTION(BlueprintCallable) void AddPlayerUID(const FString& PlayerUID);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void CheckTimeSkip();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_ChairBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) FVector FindExitSpot();  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetClosestSeatRef(AActor* Instigator, ABP_Seat_Chair_C*& SeatOut);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<FString> GetPlayerUIDArray() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasPlayerUID(const FString& PlayerUID);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void InitSeat();
    UFUNCTION(BlueprintCallable) void OnRep_AssignedPlayerUIDs();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RemovePlayerUID(const FString& PlayerUID);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SanitzeAllBedUIDs();
    UFUNCTION(BlueprintImplementableEvent) void SetPlayerUIDArray(const TArray<FString>& PlayerUIDArray);  // parameters 0x10
};
