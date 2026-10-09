// /Script/Icarus.PlayerTrackersLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/PlayerTrackers/PlayerTrackersLibrary.h

UCLASS()
class UPlayerTrackersLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToPlayerTrackersTable(FName Name, FPlayerTracker Data, FPlayerTrackersRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0xA1
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakPlayerTrackersEnum(FPlayerTrackersEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FPlayerTrackersRowHandle CastToPlayerTrackersRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FPlayerTrackersEnum A, FPlayerTrackersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FPlayerTrackersRowHandleFPlayerTrackersRowHandle(FPlayerTrackersRowHandle RowHandleA, FPlayerTrackersRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetPlayerTrackersStruct(FPlayerTrackersRowHandle RowHandle, FPlayerTracker& PlayerTrackers, EValid& Paths);  // parameters 0x99
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackersEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackersRowHandle MakeLiteralPlayerTrackers(FPlayerTrackersRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackersRowHandle MakePlayerTrackers(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackersEnum MakePlayerTrackersEnum(FPlayerTrackersEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackersRowHandle MakePlayerTrackersFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackersEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FPlayerTrackersEnum A, FPlayerTrackersEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FPlayerTrackersEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromPlayerTrackersTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackersEnum RowHandleToStruct(FPlayerTrackersRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FPlayerTrackersEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FPlayerTrackersEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FPlayerTrackersRowHandle StructToRowHandle(FPlayerTrackersEnum EnumValue);  // parameters 0x28
};
