// /Game/BP/Objects/World/Items/Deployables/Radar/MapIconsStruct.MapIconsStruct
// size 0x30

USTRUCT()
struct MapIconsStruct
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMapIconsRowHandle MapIconRowHandle;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_IcarusLinkedActorPanel_C*> SpawnedWidgets;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ClientHideOption;  // 0x0028, size 0x1
};
