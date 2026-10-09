// /Script/Icarus.ItemAttachmentLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/ItemAttachment/ItemAttachmentLibrary.h

UCLASS()
class UItemAttachmentLibrary : public URowLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AddRowToItemAttachmentTable(FName Name, FItemAttachmentData Data, FItemAttachmentRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x59
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakItemAttachmentEnum(FItemAttachmentEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FItemAttachmentRowHandle CastToItemAttachmentRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FItemAttachmentEnum A, FItemAttachmentEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FItemAttachmentRowHandleFItemAttachmentRowHandle(FItemAttachmentRowHandle RowHandleA, FItemAttachmentRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetItemAttachmentStruct(FItemAttachmentRowHandle RowHandle, FItemAttachmentData& ItemAttachment, EValid& Paths);  // parameters 0x51
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAttachmentEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAttachmentRowHandle MakeItemAttachment(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAttachmentEnum MakeItemAttachmentEnum(FItemAttachmentEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAttachmentRowHandle MakeItemAttachmentFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAttachmentRowHandle MakeLiteralItemAttachment(FItemAttachmentRowHandle RowHandle);  // parameters 0x30
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAttachmentEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FItemAttachmentEnum A, FItemAttachmentEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FItemAttachmentEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromItemAttachmentTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAttachmentEnum RowHandleToStruct(FItemAttachmentRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FItemAttachmentEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FItemAttachmentEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FItemAttachmentRowHandle StructToRowHandle(FItemAttachmentEnum EnumValue);  // parameters 0x28
};
