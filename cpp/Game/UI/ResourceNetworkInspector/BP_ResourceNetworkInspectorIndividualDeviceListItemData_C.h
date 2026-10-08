// /Game/UI/ResourceNetworkInspector/BP_ResourceNetworkInspectorIndividualDeviceListItemData.BP_ResourceNetworkInspectorIndividualDeviceListItemData_C
// Derives from: UObject
// size 0x78, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ResourceNetworkInspectorIndividualDeviceListItemData_C : public UObject
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Index;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FNetworkDeviceInstanceData Data;  // 0x0038, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowPriorityBox;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum ResourceType;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnDataUpdated OnDataUpdated;  // 0x0068, size 0x10

    UFUNCTION(BlueprintCallable) void DataUpdated();
    UFUNCTION() void ExecuteUbergraph_BP_ResourceNetworkInspectorIndividualDeviceListItemData(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDataUpdated__DelegateSignature();
};
