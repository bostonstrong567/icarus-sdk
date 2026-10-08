// /Script/Engine.StringTable
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Public/Internationalization/StringTable.h

UCLASS()
class UStringTable : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FStringTable,1> StringTable;  // 0x0028, private
    FName StringTableId;  // 0x0038, private
};
