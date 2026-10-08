// /Script/FMODStudio.FMODBankLookup
// Derives from: UObject
// size 0x60, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Private/FMODBankLookup.h

UCLASS()
class UFMODBankLookup : public UObject
{
public:
    UPROPERTY(EditAnywhere) UDataTable* DataTable;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) FString MasterBankPath;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere) FString MasterAssetsBankPath;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) FString MasterStringsBankPath;  // 0x0050, size 0x10
};
