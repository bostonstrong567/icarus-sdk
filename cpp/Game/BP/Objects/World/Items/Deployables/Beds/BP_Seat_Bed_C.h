// /Game/BP/Objects/World/Items/Deployables/Beds/BP_Seat_Bed.BP_Seat_Bed_C
// Derives from: ABP_SeatBase_C > ASeatBase > AIcarusActor > AActor > UObject
// size 0x380, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Seat_Bed_C : public ABP_SeatBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0378, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Seat_Bed(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool FindExit(FVector& OutExitLocation, FRotator& OutExitRotation);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void GetAudioSeatType(TEnumAsByte<EAudioSeatType>& Type);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OwningBedDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
