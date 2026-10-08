// /Script/FMODStudio.FMODLocalizedBankTable
// size 0x10, declared in Icarus/Plugins/FMODStudio/Source/FMODStudio/Private/FMODBankLookup.h

USTRUCT()
struct FFMODLocalizedBankTable : public FTableRowBase
{
    UPROPERTY(EditAnywhere) UDataTable* Banks;  // 0x0008, size 0x8
};
