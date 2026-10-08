// /Game/UI/Components/UMG_ResourceConnection.UMG_ResourceConnection_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x308, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ResourceConnection_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ConnectionOverlay;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ConnectionType;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Disconnected;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ResourceType;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* StatusText;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Type;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Units_1;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* LinkedActor;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum NetworkType;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor False;  // 0x02B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSlateColor True;  // 0x02E0, size 0x28

    UFUNCTION() void ExecuteUbergraph_UMG_ResourceConnection(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetResourceName();  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnDeviceResourceChanged(FIcarusResourcesEnum ResourceType);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ResourceComponentActiveStateChanged(bool IsActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ResourceComponentUpdated(EIcarusResourceType ResourceType, bool IsConnected);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void Setup(AIcarusActor* Actor, FIcarusResourcesEnum Type);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UMG_ResourceConnection_AutoGenFunc(FIcarusResourcesEnum ResourceType, bool bConnected);  // parameters 0x11
};
