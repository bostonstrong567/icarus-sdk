// /Game/UI/ResourceNetworkInspector/BP_ResourceNetworkInspectorListItemData.BP_ResourceNetworkInspectorListItemData_C
// Derives from: UObject
// size 0x88, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ResourceNetworkInspectorListItemData_C : public UObject
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCompactNetworkDeviceData Data;  // 0x0030, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Index;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShowPriorityBox;  // 0x0064, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum ResourceType;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnUpdated OnUpdated;  // 0x0078, size 0x10

    UFUNCTION(BlueprintCallable) void DataUpdated();
    UFUNCTION() void ExecuteUbergraph_BP_ResourceNetworkInspectorListItemData(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnUpdated__DelegateSignature();
};
