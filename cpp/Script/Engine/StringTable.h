// /Script/Engine.StringTable
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Public/Internationalization/StringTable.h

UCLASS()
class UStringTable : public UObject
{
private:
    TSharedPtr<FStringTable,1> StringTable;  // 0x0028, not reflected
    FName StringTableId;  // 0x0038, not reflected
};
