// /Game/BP/Objects/World/Items/Fish/BP_SkeletalItem_Fish.BP_SkeletalItem_Fish_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x591, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_Fish_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* VisualFish;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsBlinky;  // 0x0590, size 0x1

    UFUNCTION(BlueprintCallable) void Custom_Animation();  // named "Custom Animation"
    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_Fish(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBlendOut_91199F9C400E2B4956FD0DB90B732EA7(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_91199F9C400E2B4956FD0DB90B732EA7(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_91199F9C400E2B4956FD0DB90B732EA7(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnLoaded_D1E6FED94206F8C01D702FB25448C4EF(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_91199F9C400E2B4956FD0DB90B732EA7(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_91199F9C400E2B4956FD0DB90B732EA7(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
