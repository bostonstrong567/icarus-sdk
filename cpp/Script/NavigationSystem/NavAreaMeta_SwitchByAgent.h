// /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
// Derives from: UNavAreaMeta > UNavArea > UNavAreaBase > UObject
// size 0xC8, declared in Engine/Source/Runtime/NavigationSystem/Public/NavAreas/NavAreaMeta_SwitchByAgent.h

UCLASS(Abstract, Config=Engine)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent0Area;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent1Area;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent2Area;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent3Area;  // 0x0060, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent4Area;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent5Area;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent6Area;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent7Area;  // 0x0080, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent8Area;  // 0x0088, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent9Area;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent10Area;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent11Area;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent12Area;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent13Area;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent14Area;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> Agent15Area;  // 0x00C0, size 0x8
};
