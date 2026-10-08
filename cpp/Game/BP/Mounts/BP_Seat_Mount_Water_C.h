// /Game/BP/Mounts/BP_Seat_Mount_Water.BP_Seat_Mount_Water_C
// Derives from: ABP_Seat_Mount_C > ABP_SeatBase_C > ASeatBase > AIcarusActor > AActor > UObject
// size 0x624, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Seat_Mount_Water_C : public ABP_Seat_Mount_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0608, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* RefillSphereLocation;  // 0x0610, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* WaterRadius;  // 0x0618, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UnitsConsumed;  // 0x0620, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_Seat_Mount_Water(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) UInventory* GetSaddleInventory(bool& IsValid);  // parameters 0x9
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void InitialiseWithSaddleData(FSaddlesRowHandle SaddleData);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorBeginOverlap(AActor* OtherActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
