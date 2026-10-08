// /Game/BP/Objects/World/Items/Deployables/Containers/MountList_ListItem.MountList_ListItem_C
// Derives from: UObject
// size 0xA0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UMountList_ListItem_C : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMountSaveData PersistentMountData;  // 0x0028, size 0x70
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTextureRenderTarget2D* Icon;  // 0x0098, size 0x8
};
