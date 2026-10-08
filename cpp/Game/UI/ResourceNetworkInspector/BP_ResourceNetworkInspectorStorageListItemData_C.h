// /Game/UI/ResourceNetworkInspector/BP_ResourceNetworkInspectorStorageListItemData.BP_ResourceNetworkInspectorStorageListItemData_C
// Derives from: UObject
// size 0x60, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ResourceNetworkInspectorStorageListItemData_C : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCompactNetworkStorageDeviceData Data;  // 0x0028, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Index;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum ResourceType;  // 0x0050, size 0x10
};
